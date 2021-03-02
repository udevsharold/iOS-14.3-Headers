/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface RadioRecentStationsResponseStationGroup : NSObject {

	NSDictionary* _responseDictionary;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
-(NSString *)localizedTitle;
-(id)initWithResponseDictionary:(id)arg1 ;
-(BOOL)isActive;
-(NSArray *)stationDictionaries;
@end
