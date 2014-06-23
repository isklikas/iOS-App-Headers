/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:00 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <LGPhotoViewDataSource.h>

@interface LGTakePhotoDataSource : NSObject <LGPhotoViewDataSource> {
	BOOL _usingRedesign; 
	LGAsset* _asset; 
	NSString* _originalImageTempPath; 
	NSString* _editedImageTempPath; 
}
@property (nonatomic,retain) LGAsset* asset; 				//@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSString* originalImageTempPath; 				//@synthesize originalImageTempPath=_originalImageTempPath - In the implementation block
@property (nonatomic,retain) NSString* editedImageTempPath; 				//@synthesize editedImageTempPath=_editedImageTempPath - In the implementation block
@property (assign,nonatomic) BOOL usingRedesign; 				//@synthesize usingRedesign=_usingRedesign - In the implementation block
-(unsigned)numberOfAssetsAtSection:(unsigned)arg1;
-(id)assetWithSection:(unsigned)arg1 row:(unsigned)arg2;
-(unsigned)numberOfAssetSections;
-(void)removeEditedImage;
-(void)setOriginalImageTempPath:(id)arg1;
-(void)setEditedImageTempPath:(id)arg1;
-(void)saveTempFileForOriginalImage:(id)arg1;
-(void)saveTempFileForEditedImage:(id)arg1;
-(void)setUsingRedesign:(BOOL)arg1;
-(void)dealloc;
-(id)initWithImage:(id)arg1;
-(void)setAsset:(id)arg1;
-(void)setEditedImage:(id)arg1;
-(unsigned)numberOfAssets;
-(void).cxx_destruct;
@end