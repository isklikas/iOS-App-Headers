/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:27 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LoginPLIStatusRequest : NSObject {
	id<LoginPLIStatusRequestDelegate> _delegate; 
	NSURL* _endpointURL; 
}
@property (assign,nonatomic,__weak) id<LoginPLIStatusRequestDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL* endpointURL; 				//@synthesize endpointURL=_endpointURL - In the implementation block
-(void)handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
-(id)buildModelFromJSONData:(id)arg1 error:(id*)arg2;
-(id)initWithEndpointURL:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)start;
-(void).cxx_destruct;
@end