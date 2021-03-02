/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OCDSummary : NSObject {

	NSString* mTitle;
	NSString* mAuthor;
	NSString* mKeywords;
	NSString* mComments;
	NSString* mHyperlinkBase;
	NSString* _subject;
	NSString* _company;

}

@property (retain) NSString * subject;              //@synthesize subject=_subject - In the implementation block
@property (retain) NSString * company;              //@synthesize company=_company - In the implementation block
-(NSString *)subject;
-(void)setKeywords:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(id)author;
-(id)keywords;
-(void)setAuthor:(id)arg1 ;
-(void)setComments:(id)arg1 ;
-(NSString *)company;
-(id)comments;
-(void)setTitle:(id)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(id)title;
-(id)hyperlinkBase;
-(void)setHyperlinkBase:(id)arg1 ;
@end
