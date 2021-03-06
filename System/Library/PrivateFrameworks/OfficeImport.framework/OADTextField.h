/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {

	NSString* mText;
	OADParagraphProperties* mParagraphProperties;

}
-(unsigned long long)characterCount;
-(BOOL)isEmpty;
-(id)init;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)paragraphProperties;
-(void)removeUnnecessaryOverrides;
@end

