/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSArray;

@interface NFTLV : NSObject {

	unsigned _tag;
	NSData* _value;
	NSArray* _children;

}

@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) NSData * value; 
@property (nonatomic,readonly) NSArray * children; 
+(id)_intToData:(unsigned)arg1 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(BOOL)arg3 definite:(BOOL)arg4 ;
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVSsWithBytes:(const void*)arg1 length:(unsigned long long)arg2 requireDefiniteEncoding:(BOOL)arg3 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)TLVWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedChar:(unsigned char)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVsWithData:(id)arg1 requireDefiniteEncoding:(BOOL)arg2 ;
-(NSData *)value;
-(unsigned)tag;
-(id)childrenWithTag:(unsigned)arg1 ;
-(NSArray *)children;
-(id)description;
-(id)valueAsString;
-(id)asData;
-(id)valueAsHexString;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)childWithTag:(unsigned)arg1 ;
-(unsigned)valueAsUnsignedLong;
-(unsigned short)valueAsUnsignedShort;
@end
