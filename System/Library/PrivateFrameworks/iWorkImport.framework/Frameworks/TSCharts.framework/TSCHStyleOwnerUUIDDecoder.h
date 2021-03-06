/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHStyleOwnerUUIDDecoder : NSObject {

	unsigned char mUUID[16];
	unsigned long long mIndex;

}
+(id)UUIDDecoderWithUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(unsigned char)decodeByte;
-(unsigned long long)decodeUInt64;
-(BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)arg1 ;
-(unsigned long long)decodeNSUIntegerFromUInt64;
-(void)endDecode;
@end

