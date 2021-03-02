/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSError;

@interface CKDResponseBodyParser : NSObject {

	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;
	BOOL _testRepeatedParseResults;
	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> parseQueue; 
@property (nonatomic,retain) NSMutableData * parserData; 
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL testRepeatedParseResults;                          //@synthesize testRepeatedParseResults=_testRepeatedParseResults - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                     //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(NSError *)parserError;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)processData:(id)arg1 ;
-(id)initWithQoS:(long long)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(void)setParserError:(NSError *)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(void)setTestRepeatedParseResults:(BOOL)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(id)objectParsedBlock;
-(BOOL)testRepeatedParseResults;
@end
