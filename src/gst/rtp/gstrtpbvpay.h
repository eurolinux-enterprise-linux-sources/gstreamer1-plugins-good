/* GStreamer
 * Copyright (C) <2009> Wim Taymans <wim.taymans@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GST_RTP_BV_PAY_H__
#define __GST_RTP_BV_PAY_H__

#include <gst/gst.h>
#include <gst/rtp/gstrtpbaseaudiopayload.h>

G_BEGIN_DECLS

#define GST_TYPE_RTP_BV_PAY \
  (gst_rtp_bv_pay_get_type())
#define GST_RTP_BV_PAY(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_RTP_BV_PAY,GstRTPBVPay))
#define GST_RTP_BV_PAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_RTP_BV_PAY,GstRTPBVPayClass))
#define GST_IS_RTP_BV_PAY(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_RTP_BV_PAY))
#define GST_IS_RTP_BV_PAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_RTP_BV_PAY))

typedef struct _GstRTPBVPay GstRTPBVPay;
typedef struct _GstRTPBVPayClass GstRTPBVPayClass;

struct _GstRTPBVPay
{
  GstRTPBaseAudioPayload audiopayload;

  gint mode;
};

struct _GstRTPBVPayClass
{
  GstRTPBaseAudioPayloadClass parent_class;
};

GType gst_rtp_bv_pay_get_type (void);

gboolean gst_rtp_bv_pay_plugin_init (GstPlugin * plugin);

G_END_DECLS

#endif /* __GST_RTP_BV_PAY_H__ */
