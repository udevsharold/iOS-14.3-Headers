/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNTCC;
@interface CNTCC : NSObject {

	id<CNTCC> _tccServices;

}

@property (nonatomic,retain) id<CNTCC> tccServices;              //@synthesize tccServices=_tccServices - In the implementation block
+(id)sharedInstance;
-(id<CNTCC>)tccServices;
-(void)simulate:(long long)arg1 ;
-(int)accessPreflight;
-(void)setTccServices:(id<CNTCC>)arg1 ;
@end

