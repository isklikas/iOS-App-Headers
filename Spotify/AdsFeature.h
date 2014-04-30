/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:45 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPFeature
@optional
+(id)featureDependencies;
-(void)load;
@required
+(id)featureIdentifier;
-(void)configureWithFeatures(id):arg1 ;
-(void)unload;
-(void)configureWithFeatures(id):arg1 ;
-(void)unload;
@end

@protocol AdsFeature
@property (nonatomic,copy) BOOL isAdsEnabled; 
@required
-(id)provideAdsManager;
-(BOOL)isAdsEnabled;
-(id)provideAdsManager;
-(BOOL)isAdsEnabled;
@end