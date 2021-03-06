/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BPSTTRMetadata : NSObject {

	NSString* _componentName;
	NSString* _componentVersion;
	long long _componentID;
	NSString* _title;
	NSString* _radarDescription;

}

@property (nonatomic,retain) NSString * componentName;                 //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,retain) NSString * componentVersion;              //@synthesize componentVersion=_componentVersion - In the implementation block
@property (assign,nonatomic) long long componentID;                    //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * radarDescription;              //@synthesize radarDescription=_radarDescription - In the implementation block
-(id)_parameters;
-(id)init;
-(id)queryItems;
-(id)initWithComponent:(unsigned long long)arg1 ;
-(NSString *)componentVersion;
-(long long)componentID;
-(NSString *)radarDescription;
-(void)setRadarDescription:(NSString *)arg1 ;
-(void)setComponentID:(long long)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)componentName;
-(NSString *)title;
-(void)_setComponentValuesFromComponent:(unsigned long long)arg1 ;
-(id)initWithComponentName:(id)arg1 componentVersion:(id)arg2 componentID:(long long)arg3 ;
@end

