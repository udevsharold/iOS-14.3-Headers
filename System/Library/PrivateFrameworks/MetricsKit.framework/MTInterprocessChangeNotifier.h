/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTInterprocessChangeNotifier : NSObject {

	NSString* _identifier;
	int _token;

}
+(void)notify:(id)arg1 ;
+(id)fullIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)notify;
-(id)initWithIdentifier:(id)arg1 onChange:(/*^block*/id)arg2 ;
@end
