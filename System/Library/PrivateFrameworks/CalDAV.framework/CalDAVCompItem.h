/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {

	NSString* _nameAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
-(id)init;
-(void)write:(id)arg1 ;
-(NSString *)nameAttribute;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)setNameAttribute:(NSString *)arg1 ;
@end
