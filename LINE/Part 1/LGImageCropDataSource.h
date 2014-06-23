/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol LGPhotoViewDataSource
@optional
-(BOOL)isAssetsFullyLoaded;
-(void)removeEditedImage;
-(id)originalImageTempPath;
-(id)editedImageTempPath;
-(id)groupName;
-(id)tableView;
-(void)setEditedImage(id):arg1 ;
@required
-(unsigned)numberOfAssetsAtSection(unsigned):arg1 ;
-(id)assetWithSection(unsigned):arg1 row(unsigned):arg2 ;
-(unsigned)numberOfAssetSections;
-(unsigned)numberOfAssets;
-(unsigned)numberOfAssetsAtSection(unsigned):arg1 ;
-(id)assetWithSection(unsigned):arg1 row(unsigned):arg2 ;
-(unsigned)numberOfAssetSections;
-(unsigned)numberOfAssets;
@end

@protocol LGImageCropDataSource
@required
-(id)assetWithSection(unsigned):arg1 row(unsigned):arg2 ;
-(id)assetWithSection(unsigned):arg1 row(unsigned):arg2 ;
@end
