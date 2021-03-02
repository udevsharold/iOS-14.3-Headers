/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary, NSString;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidProcessNameMap;
	NSString* _niluuidProcessName;

}
-(id)init;
-(void)noteUUID:(id)arg1 forProcessName:(id)arg2 ;
-(void)_uuidProcessNameMapPrune;
-(id)stateDictionary;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
@end
