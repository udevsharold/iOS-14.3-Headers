/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSData;

@interface CSAdBlockerAssetDecoderV2 : NSObject {

	float _maxFingerprintBufferSize;
	NSMutableDictionary* _shouldResetAdsDictionary;
	NSData* _payloadData;

}

@property (nonatomic,retain) NSData * payloadData;                                          //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) float maxFingerprintBufferSize;                              //@synthesize maxFingerprintBufferSize=_maxFingerprintBufferSize - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * shouldResetAdsDictionary;              //@synthesize shouldResetAdsDictionary=_shouldResetAdsDictionary - In the implementation block
-(NSData *)payloadData;
-(void)setPayloadData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(float)maxFingerprintBufferSize;
-(NSMutableDictionary *)shouldResetAdsDictionary;
@end

