/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:17 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCopying.h>

@interface DDXMLNode : NSObject <NSCopying> {
	struct _xmlKind* genericPtr; 
	DDXMLNode* owner; 
}
+(id)namespaceWithName:(id)arg1 stringValue:(id)arg2;
+(id)nodeWithPrimitive:(struct _xmlKind*)arg1 owner:(id)arg2;
+(void)getPrefix:(id*)arg1 localName:(id*)arg2 forName:(id)arg3;
+(void)removeAllAttributesFromNode:(struct _xmlNode*)arg1;
+(void)removeNamespace:(struct _xmlNs*)arg1 fromNode:(struct _xmlNode*)arg2;
+(void)removeAllNamespacesFromNode:(struct _xmlNode*)arg1;
+(id)prefixForName:(id)arg1;
+(void)removeAllChildrenFromNode:(struct _xmlNode*)arg1;
+(id)nodeWithUnknownPrimitive:(struct _xmlKind*)arg1 owner:(id)arg2;
+(void)detachChild:(struct _xmlNode*)arg1;
+(id)localNameForName:(id)arg1;
+(void)recursiveStripDocPointersFromNode:(struct _xmlNode*)arg1;
+(void)stripDocPointersFromAttr:(struct _xmlAttr*)arg1;
+(void)recursiveStripNamespace:(struct _xmlNs*)arg1 fromNode:(struct _xmlNode*)arg2;
+(void)recursiveMigrateNamespace:(struct _xmlNs*)arg1 to:(struct _xmlNs*)arg2 node:(struct _xmlNode*)arg3;
+(void)recursiveFixDefaultNamespacesInNode:(struct _xmlNode*)arg1 withNewRoot:(struct _xmlNode*)arg2;
+(void)detachNamespace:(struct _xmlNs*)arg1 fromNode:(struct _xmlNode*)arg2;
+(void)detachAttribute:(struct _xmlAttr*)arg1 andClean:(BOOL)arg2;
+(void)detachChild:(struct _xmlNode*)arg1 andClean:(BOOL)arg2 andFixNamespaces:(BOOL)arg3;
+(id)elementWithName:(id)arg1 children:(id)arg2 attributes:(id)arg3;
+(id)elementWithName:(id)arg1 URI:(id)arg2;
+(id)attributeWithName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+(id)processingInstructionWithName:(id)arg1 stringValue:(id)arg2;
+(id)commentWithStringValue:(id)arg1;
+(void)getHasPrefix:(BOOL*)arg1 localName:(id*)arg2 forName:(id)arg3;
+(void)detachAttribute:(struct _xmlAttr*)arg1;
+(void)initialize;
+(void)removeChild:(struct _xmlNode*)arg1;
+(id)elementWithName:(id)arg1;
+(id)elementWithName:(id)arg1 stringValue:(id)arg2;
+(id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+(id)textWithStringValue:(id)arg1;
+(id)lastError;
+(void)removeAttribute:(struct _xmlAttr*)arg1;
-(id)XMLStringWithOptions:(unsigned)arg1;
-(id)initWithPrimitive:(struct _xmlKind*)arg1 owner:(id)arg2;
-(BOOL)_hasParent;
-(struct _xmlStd*)_XPathPreProcess:(id)arg1;
-(id)rootDocument;
-(id)XPath;
-(id)nodesForXPath:(id)arg1 error:(id*)arg2;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1;
-(unsigned)level;
-(void)setName:(id)arg1;
-(id)name;
-(void)detach;
-(unsigned)index;
-(id)stringValue;
-(void)setStringValue:(id)arg1;
-(id)previousSibling;
-(id)nextSibling;
-(id)nextNode;
-(unsigned)kind;
-(id)XMLString;
-(unsigned)childCount;
-(id)childAtIndex:(unsigned)arg1;
-(id)URI;
-(void)setURI:(id)arg1;
-(id)children;
-(id)prefix;
-(id)localName;
-(id)previousNode;
-(id)parent;
@end