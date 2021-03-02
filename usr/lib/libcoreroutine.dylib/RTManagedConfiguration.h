/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTManagedConfigurationObserver;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTManagedConfiguration : NSObject {

	id<RTManagedConfigurationObserver> _delegate;

}

@property (assign,nonatomic,__weak) id<RTManagedConfigurationObserver> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)isFindMyCarAllowed;
-(BOOL)isDiagnosticsAndUsageAllowed;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(void)setDelegate:(id<RTManagedConfigurationObserver>)arg1 ;
-(id<RTManagedConfigurationObserver>)delegate;
@end
