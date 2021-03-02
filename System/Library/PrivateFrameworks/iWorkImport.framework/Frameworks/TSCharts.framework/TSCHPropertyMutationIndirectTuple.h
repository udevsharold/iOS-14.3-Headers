/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCHPropertyMutationTuple.h>

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple {

	int mStyleOwnerType;
	unsigned long long mStyleOwnerIndex;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned long long index; 
-(unsigned long long)index;
-(int)type;
-(id)initWithStyleOwner:(id)arg1 mutations:(id)arg2 ;
-(id)styleOwner;
-(id)styleOwnerRef;
-(id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2 inChart:(id)arg3 mutations:(id)arg4 ;
-(id)indirectTuple;
@end
