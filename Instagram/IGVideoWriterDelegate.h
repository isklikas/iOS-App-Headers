/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:01 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol IGVideoWriterDelegate
@required
-(*)nextAudioSampleBufferForVideoWriter({):arg1 ;
-(void)videoWriter(id):arg1 didFinishWritingVideoToURL(id):arg2 ;
-(void)videoWriter(id):arg1 didFailWithError(id):arg2 ;
-(*)nextRenderedPixelBufferForVideoWriter({):arg1 withAdaptor(_):arg2 getPresentationTime(_):arg3 ;
-(*)nextAudioSampleBufferForVideoWriter({):arg1 ;
-(void)videoWriter(id):arg1 didFinishWritingVideoToURL(id):arg2 ;
-(void)videoWriter(id):arg1 didFailWithError(id):arg2 ;
-(*)nextRenderedPixelBufferForVideoWriter({):arg1 withAdaptor(_):arg2 getPresentationTime(_):arg3 ;
@end
