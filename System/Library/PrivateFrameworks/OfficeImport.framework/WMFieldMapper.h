/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WMParagraphMapper.h>

@class NSMutableString, NSString;

@interface WMFieldMapper : WMParagraphMapper {

	int mMode;
	unsigned mType;
	NSMutableString* mMarkerText;
	NSString* mLink;

}
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
@end
