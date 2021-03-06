/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowBlock : HMFObject {

	unsigned long long _blockRow;
	unsigned long long _type;
	NSData* _optionsData;

}

@property (nonatomic,readonly) unsigned long long blockRow;              //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * optionsData;                     //@synthesize optionsData=_optionsData - In the implementation block
-(id)attributeDescriptions;
-(unsigned long long)type;
-(NSData *)optionsData;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

