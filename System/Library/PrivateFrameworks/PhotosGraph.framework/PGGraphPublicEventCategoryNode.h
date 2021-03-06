/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	NSString* _label;
	NSString* _localizedName;

}

@property (nonatomic,readonly) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)filter;
-(id)initWithLabel:(id)arg1 ;
-(NSArray *)localizedSynonyms;
-(id)associatedNodesForRemoval;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(unsigned short)domain;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(NSString *)localizedName;
-(id)label;
@end

