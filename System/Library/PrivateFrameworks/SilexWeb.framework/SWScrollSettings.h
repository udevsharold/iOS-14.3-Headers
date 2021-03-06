/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SWScrollSettings : NSObject {

	BOOL _scrollEnabled;
	BOOL _scrollsToTop;
	BOOL _showsVerticalScrollIndicator;

}

@property (nonatomic,readonly) BOOL scrollEnabled;                             //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (nonatomic,readonly) BOOL scrollsToTop;                              //@synthesize scrollsToTop=_scrollsToTop - In the implementation block
@property (nonatomic,readonly) BOOL showsVerticalScrollIndicator;              //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
-(BOOL)scrollsToTop;
-(BOOL)scrollEnabled;
-(BOOL)showsVerticalScrollIndicator;
-(id)initWithScrollEnabled:(BOOL)arg1 scrollsToTop:(BOOL)arg2 showsVerticalScrollIndicator:(BOOL)arg3 ;
@end

