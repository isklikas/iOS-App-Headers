/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:23 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPTSingleRequestViewModelDelegate
@optional
-(void)viewModel(id):arg1 setLoading(BOOL):arg2 ;
-(void)viewModel(id):arg1 offlineModeChanged(BOOL):arg2 ;
@required
-(void)viewModel(id):arg1 didLoadData(id):arg2 loadTime(double):arg3 ;
-(void)viewModel(id):arg1 didFailLoad(id):arg2 ;
-(void)viewModel(id):arg1 didLoadData(id):arg2 loadTime(double):arg3 ;
-(void)viewModel(id):arg1 didFailLoad(id):arg2 ;
@end

@protocol SPTArtistBiograhyViewDelegate
@optional
-(void)artistBiographyView(id):arg1 didRequestURL(id):arg2 ;
@end
