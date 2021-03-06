/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSString;

@interface WLWiFiNetwork : NSObject {

	WiFiNetworkRef _ref;

}

@property (assign,nonatomic) WiFiNetworkRef ref;              //@synthesize ref=_ref - In the implementation block
@property (nonatomic,readonly) NSString * ssid; 
-(NSString *)ssid;
-(WiFiNetworkRef)ref;
-(void)dealloc;
-(void)setRef:(WiFiNetworkRef)arg1 ;
-(id)initWithWiFiNetworkRef:(WiFiNetworkRef)arg1 ;
@end

