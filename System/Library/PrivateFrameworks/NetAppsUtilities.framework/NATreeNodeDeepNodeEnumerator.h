/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NATreeNode, NSArray;

@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying> {

	NSMutableArray* _enumeratorStack;
	NATreeNode* _node;

}

@property (nonatomic,copy,readonly) NATreeNode * node;                 //@synthesize node=_node - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
-(NATreeNode *)node;
-(id)nextObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)allObjects;
-(id)initWithNode:(id)arg1 ;
@end
