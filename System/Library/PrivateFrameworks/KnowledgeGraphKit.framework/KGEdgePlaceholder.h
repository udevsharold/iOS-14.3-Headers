/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGEdge.h>

@protocol KGNode;
@class NSArray, NSDictionary, NSString;

@interface KGEdgePlaceholder : NSObject <KGEdge> {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	NSDictionary* _properties;
	id<KGNode> _sourceNode;
	id<KGNode> _targetNode;

}

@property (nonatomic,readonly) unsigned long long identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<KGNode> targetNode;                       //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                       //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) float weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)labels;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<KGNode>)targetNode;
-(unsigned long long)identifier;
-(NSDictionary *)properties;
-(void)_setIdentifier:(unsigned long long)arg1 ;
-(BOOL)isResolved;
-(id<KGNode>)sourceNode;
-(float)weight;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
@end
