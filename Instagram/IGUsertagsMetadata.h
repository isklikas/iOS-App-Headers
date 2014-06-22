/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:23 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGMediaMetadataProtocol.h>

@interface IGUsertagsMetadata : NSObject <IGMediaMetadataProtocol> {
	IGUsertagGroup* _usertags; 
	unsigned _numberOfFaces; 
	NSArray* _faceRectangles; 
}
@property (nonatomic,retain) IGUsertagGroup* usertags; 				//@synthesize usertags=_usertags - In the implementation block
@property (assign,nonatomic) unsigned numberOfFaces; 				//@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,copy) NSArray* faceRectangles; 				//@synthesize faceRectangles=_faceRectangles - In the implementation block
-(void)setFaceRectangles:(id)arg1;
-(id)sharingInfo;
-(void)setUsertags:(id)arg1;
-(void)prepareToShare;
-(void)clearFacesInfo;
-(void)setNumberOfFaces:(unsigned)arg1;
-(void).cxx_destruct;
@end