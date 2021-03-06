/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData, NSArray;

@interface TKSmartCardATR : NSObject {

	NSMutableArray* _interfaces;
	NSData* _bytes;
	NSData* _historicalBytes;

}

@property (nonatomic,readonly) NSData * bytes;                           //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) NSArray * protocols; 
@property (nonatomic,readonly) NSData * historicalBytes;                 //@synthesize historicalBytes=_historicalBytes - In the implementation block
@property (nonatomic,readonly) NSArray * historicalRecords; 
-(id)initWithSource:(/*^block*/id)arg1 ;
-(NSData *)bytes;
-(id)description;
-(id)initWithBytes:(id)arg1 ;
-(id)parseFromSource:(/*^block*/id)arg1 ;
-(id)interfaceGroupAtIndex:(long long)arg1 ;
-(id)_formatHexData:(id)arg1 to:(id)arg2 ;
-(id)interfaceGroupForProtocol:(unsigned long long)arg1 ;
-(NSArray *)protocols;
-(NSData *)historicalBytes;
-(NSArray *)historicalRecords;
@end

