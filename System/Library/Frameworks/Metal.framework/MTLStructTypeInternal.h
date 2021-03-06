/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructType.h>

@class NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {

	unsigned long long _dataType;
	NSDictionary* _dictionary;
	NSArray* _members;
	BOOL _isIndirectArgumentBuffer;

}

@property (assign) BOOL isIndirectArgumentBuffer;              //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
-(id)memberByName:(id)arg1 ;
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isIndirectArgumentBuffer;
-(BOOL)isStructLayoutThreadSafeWith:(id)arg1 ;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)description;
-(id)members;
-(id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setMembers:(id*)arg1 count:(unsigned long long)arg2 ;
@end

