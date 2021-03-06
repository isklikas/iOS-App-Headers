/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:57 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSXMLParserDelegate.h>

@interface AmazonUnmarshallerXMLParserDelegate : NSObject <NSXMLParserDelegate> {
	NSMutableString* currentText; 
	NSString* currentTag; 
	AmazonUnmarshallerXMLParserDelegate* caller; 
	id parentObject; 
	SEL parentSetter; 
	NSString* endElementTagName; 
}
@property (nonatomic,copy) NSString* currentText; 
@property (nonatomic,retain) NSString* currentTag; 
@property (nonatomic,retain) NSString* endElementTagName; 
-(void)setCurrentTag:(id)arg1;
-(id)initWithCaller:(id)arg1 withParentObject:(id)arg2 withSetter:(SEL)arg3 withAlias:(id)arg4;
-(id)initWithCaller:(id)arg1 withParentObject:(id)arg2 withSetter:(SEL)arg3;
-(void)setEndElementTagName:(id)arg1;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
-(void)parser:(id)arg1 foundCharacters:(id)arg2;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
-(void)dealloc;
@end