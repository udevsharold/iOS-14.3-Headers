/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateDelegateHidden;
	BOOL _invalidateDelegateMetrics;
	BOOL _invalidateDelegateOffsetsAndConnections;

}

@property (assign,nonatomic) BOOL invalidateDelegateHidden;                             //@synthesize invalidateDelegateHidden=_invalidateDelegateHidden - In the implementation block
@property (assign,nonatomic) BOOL invalidateDelegateMetrics;                            //@synthesize invalidateDelegateMetrics=_invalidateDelegateMetrics - In the implementation block
@property (assign,nonatomic) BOOL invalidateDelegateOffsetsAndConnections;              //@synthesize invalidateDelegateOffsetsAndConnections=_invalidateDelegateOffsetsAndConnections - In the implementation block
-(id)init;
-(void)setInvalidateDelegateOffsetsAndConnections:(BOOL)arg1 ;
-(void)setInvalidateDelegateHidden:(BOOL)arg1 ;
-(void)setInvalidateDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateDelegateHidden;
-(BOOL)invalidateDelegateMetrics;
-(BOOL)invalidateDelegateOffsetsAndConnections;
@end

