/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _UIPasteboardOptions : NSObject {

	BOOL _pinned;
	BOOL _localOnly;
	NSDate* _expirationDate;

}

@property (assign,getter=isPinned,nonatomic) BOOL pinned;                    //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isLocalOnly,nonatomic) BOOL localOnly;              //@synthesize localOnly=_localOnly - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)optionsWithDictionary:(id)arg1 ;
-(void)setPinned:(BOOL)arg1 ;
-(void)setLocalOnly:(BOOL)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isPinned;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)isLocalOnly;
-(id)initWithOptionsDictionary:(id)arg1 ;
@end

