/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfiguration : NSObject {

	SCPreferencesRef _prefs;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)cleanupPrefs;
-(CFStringRef)dataServiceID;
-(unsigned char)synchronizeForWriting:(BOOL)arg1 ;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)arg1 ;
-(id)interfaceConfigurationValueForKey:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setInterfaceConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfiguration:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setProtocolConfiguration:(id)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfigurationValueForKey:(CFStringRef)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(void)setProtocolConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 protocolType:(CFStringRef)arg3 serviceID:(CFStringRef)arg4 ;
@end

