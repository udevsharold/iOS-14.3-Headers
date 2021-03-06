/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTUserSessionMonitor : RTNotifier {

	BOOL _previouslyActiveUser;

}

@property (assign,nonatomic) BOOL previouslyActiveUser;              //@synthesize previouslyActiveUser=_previouslyActiveUser - In the implementation block
@property (getter=activeUser,readonly) BOOL activeUser; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(unsigned)uid;
-(id)init;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)activeUser;
-(BOOL)previouslyActiveUser;
-(void)setPreviouslyActiveUser:(BOOL)arg1 ;
@end

