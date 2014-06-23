/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:17 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LGImageFilterHelper : LGFilterHelper {
	char* originalImageData; 
	char* thumbnailImageData; 
	NSArray* _filterNames; 
	NSArray* _filterIds; 
	UIImage* _originalImage; 
	UIImage* _thumbnailImage; 
	NSDictionary* _filteredThumbnails; 
	NSOperationQueue* _operationQueue; 
	NSOperationQueue* _thumbnailOperationQueue; 
}
@property (nonatomic,copy) NSArray* filterNames; 				//@synthesize filterNames=_filterNames - In the implementation block
@property (nonatomic,copy) NSArray* filterIds; 				//@synthesize filterIds=_filterIds - In the implementation block
@property (nonatomic,retain) UIImage* originalImage; 				//@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage* thumbnailImage; 				//@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSDictionary* filteredThumbnails; 				//@synthesize filteredThumbnails=_filteredThumbnails - In the implementation block
@property (nonatomic,retain) NSOperationQueue* operationQueue; 				//@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue* thumbnailOperationQueue; 				//@synthesize thumbnailOperationQueue=_thumbnailOperationQueue - In the implementation block
-(id)imageWithApplyFilterWithIndex:(int)arg1 image:(id)arg2;
-(int)applyFilterWithFilterID:(int)arg1 patternID:(int)arg2 sourceData:(char*)arg3 result:(char*)arg4 width:(int)arg5 height:(int)arg6;
-(id)thumbnailImageForFilterIndex:(int)arg1;
-(void)setFilteredThumbnails:(id)arg1;
-(id)applyThumbnailFilterWithIndex:(int)arg1;
-(id)applyFilterWithIndex:(int)arg1;
-(void)cancelAllFilterOperation;
-(id)thumbnailWithFilterIndex:(int)arg1;
-(void)applyThumbnailsWithImage:(id)arg1 completion:(id)arg2;
-(void)rotateThumbnails:(id)arg1 imageOrientation:(int)arg2;
-(void)applyFilterWithIndex:(int)arg1 image:(id)arg2 completion:(id)arg3;
-(void)setThumbnailOperationQueue:(id)arg1;
-(void)setOperationQueue:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setOriginalImage:(id)arg1;
-(void)setThumbnailImage:(id)arg1;
-(void).cxx_destruct;
@end