/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKQuadTreeNode;

@interface CKQuadTree : NSObject {

	CKQuadTreeNode* _rootNode;

}

@property (nonatomic,readonly) CKQuadTreeNode * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
-(id)init;
-(void)visit:(/*^block*/id)arg1 ;
-(CKQuadTreeNode *)rootNode;
-(id)initWithPoints:(id)arg1 ;
@end
