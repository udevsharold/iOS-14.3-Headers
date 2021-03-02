/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSObject;

@interface AVCSessionConfiguration : NSObject {

	long long _sessionMode;
	NSObject*<NSCopying> _reportingHierarchyToken;
	BOOL _oneToOneModeEnabled;

}

@property (assign,nonatomic) long long sessionMode; 
@property (nonatomic,copy) NSObject*<NSCopying> reportingHierarchyToken;                         //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (assign,getter=isOneToOneModeEnabled,nonatomic) BOOL oneToOneModeEnabled;              //@synthesize oneToOneModeEnabled=_oneToOneModeEnabled - In the implementation block
+(long long)clientSessionModeWithSessionMode:(long long)arg1 ;
+(long long)sessionModeWithClientSessionMode:(long long)arg1 ;
-(void)dealloc;
-(id)dictionary;
-(NSObject*<NSCopying>)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(NSObject*<NSCopying>)arg1 ;
-(long long)sessionMode;
-(void)setSessionMode:(long long)arg1 ;
-(BOOL)isOneToOneModeEnabled;
-(void)setOneToOneModeEnabled:(BOOL)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
@end
