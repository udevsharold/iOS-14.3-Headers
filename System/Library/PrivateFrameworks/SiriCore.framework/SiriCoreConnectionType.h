/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(long long)technology;
-(BOOL)isEdge;
-(id)description;
-(BOOL)isWWAN;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

