/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned long long length; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(BOOL)decompressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(void*)mutableBytes;
-(BOOL)compressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(void)setData:(id)arg1 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(BOOL)_isCompact;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

