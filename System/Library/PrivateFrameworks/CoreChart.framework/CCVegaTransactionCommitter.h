/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableArray;

@interface CCVegaTransactionCommitter : NSObject {

	NSHashTable* _renderers;
	NSMutableArray* _mainThreadOperations;
	BOOL _needsCATransaction;

}
-(void)commit;
-(id)initWithRenderers:(id)arg1 ;
-(id)newMainThreadOperation;
-(void)setNeedsCATransaction;
@end
