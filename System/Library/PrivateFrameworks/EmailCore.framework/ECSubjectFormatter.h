/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class _ECSubjectFormatterContext, NSString;

@interface ECSubjectFormatter : NSFormatter <EFLoggable> {

	long long _style;
	_ECSubjectFormatterContext* _replyContext;
	_ECSubjectFormatterContext* _forwardContext;

}

@property (assign,nonatomic) long long style;                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) _ECSubjectFormatterContext * replyContext;                //@synthesize replyContext=_replyContext - In the implementation block
@property (nonatomic,retain) _ECSubjectFormatterContext * forwardContext;              //@synthesize forwardContext=_forwardContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)nonLocalizedReplyPrefix;
+(id)nonLocalizedForwardPrefix;
+(id)subjectStringForDisplayForSubjectString:(id)arg1 ;
+(id)subjectStringForDisplayForSubjectString:(id)arg1 style:(long long)arg2 ;
+(id)_subjectStringForDisplayForObject:(id)arg1 style:(long long)arg2 ;
+(id)subjectStringForDisplayForSubject:(id)arg1 style:(long long)arg2 ;
+(id)subjectStringForDisplayForMessage:(id)arg1 style:(long long)arg2 ;
+(id)localizedReplyPrefix;
+(id)localizedForwardPrefix;
+(id)subjectStringForDisplayForSubject:(id)arg1 ;
+(id)subjectStringForDisplayForMessage:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)init;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)_localizedPrefixForSubjectFromSubject:(id)arg1 ;
-(_ECSubjectFormatterContext *)replyContext;
-(_ECSubjectFormatterContext *)forwardContext;
-(void)setReplyContext:(_ECSubjectFormatterContext *)arg1 ;
-(void)setForwardContext:(_ECSubjectFormatterContext *)arg1 ;
@end

