/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HIDPreferences.framework/HIDPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface HIDPreferencesHelperListener : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSMutableArray* _clients;

}
-(void)removeClient:(id)arg1 ;
-(id)init;
-(BOOL)setupListener;
-(void)acceptConnection:(id)arg1 ;
@end

