/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSDispatchData : NSData
+(BOOL)supportsSecureCoding;
-(BOOL)_providesConcreteBacking;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)_createDispatchData;
-(void)getBytes:(void*)arg1 ;
-(unsigned long long)hash;
-(BOOL)_isDispatchData;
-(id)initWithCoder:(id)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
@end
