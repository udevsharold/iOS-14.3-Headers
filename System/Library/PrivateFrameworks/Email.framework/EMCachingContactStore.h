/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject {

	CNContactStore* _cnStore;
	EFLazyCache* _displayNameCache;

}

@property (nonatomic,retain) EFLazyCache * displayNameCache;              //@synthesize displayNameCache=_displayNameCache - In the implementation block
@property (nonatomic,readonly) CNContactStore * cnStore;                  //@synthesize cnStore=_cnStore - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(void)_invalidateDisplayNameCache;
-(id)displayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2 ;
-(EFLazyCache *)displayNameCache;
-(id)displayNameForEmailAddress:(id)arg1 ;
-(id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2 ;
-(void)setDisplayNameCache:(EFLazyCache *)arg1 ;
-(CNContactStore *)cnStore;
@end
