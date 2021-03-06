/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:31 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ImageMapRootObject : NSObject {
	NSDictionary* images_; 
	NSDictionary* scenes_; 
	NSDictionary* actions_; 
	ImageMapCanvasObject* _canvas; 
}
@property (nonatomic,retain,copy) ImageMapCanvasObject* canvas; 				//@synthesize canvas=_canvas - In the implementation block
-(CGRect)parseRectFromDictionary:(id)arg1;
-(CGRect)parseRectFromArray:(id)arg1;
-(void)linkObjects;
-(id)imageObjectForName:(id)arg1;
-(id)actionObjectForName:(id)arg1;
-(id)sceneObjectForName:(id)arg1;
-(id)initWithJsonData:(id)arg1;
-(BOOL)isAvailable;
-(void)parseData:(id)arg1;
-(id)description;
-(void).cxx_destruct;
@end