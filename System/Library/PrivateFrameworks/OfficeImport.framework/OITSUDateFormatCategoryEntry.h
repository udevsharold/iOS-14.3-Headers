/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {

	unsigned short _separator;
	NSMutableArray* _formatters;
	NSMutableSet* _formatStrings;

}
-(unsigned short)separator;
-(id)formatStrings;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id*)arg3 perfect:(BOOL*)arg4 ;
-(void)addFormat:(id)arg1 locale:(id)arg2 ;
@end
