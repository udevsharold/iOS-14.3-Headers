/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _LSStartupJournalledNotification : NSObject {

	BOOL _plugins;
	int _notification;
	NSArray* _proxies;

}

@property (nonatomic,readonly) int notification;               //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * proxies;              //@synthesize proxies=_proxies - In the implementation block
@property (nonatomic,readonly) BOOL plugins;                   //@synthesize plugins=_plugins - In the implementation block
-(BOOL)plugins;
-(int)notification;
-(id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(BOOL)arg3 ;
-(NSArray *)proxies;
@end
