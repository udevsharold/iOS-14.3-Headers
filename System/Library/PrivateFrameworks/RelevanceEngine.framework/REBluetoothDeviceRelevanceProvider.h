/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (nonatomic,readonly) BOOL connectedToCar;                  //@synthesize connectedToCar=_connectedToCar - In the implementation block
@property (nonatomic,readonly) BOOL connectedToSpeaker;              //@synthesize connectedToSpeaker=_connectedToSpeaker - In the implementation block
+(id)relevanceSimulatorID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)connectedToCar;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithConnectionToCar:(BOOL)arg1 connectionToSpeaker:(BOOL)arg2 ;
-(BOOL)connectedToSpeaker;
@end

