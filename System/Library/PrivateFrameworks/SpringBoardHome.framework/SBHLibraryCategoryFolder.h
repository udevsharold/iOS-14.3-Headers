/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolder.h>

@class SBHLibraryCategoryIdentifier;

@interface SBHLibraryCategoryFolder : SBFolder {

	SBHLibraryCategoryIdentifier* _libraryCategoryIdentifier;

}

@property (nonatomic,readonly) SBHLibraryCategoryIdentifier * libraryCategoryIdentifier;              //@synthesize libraryCategoryIdentifier=_libraryCategoryIdentifier - In the implementation block
-(id)initWithDisplayName:(id)arg1 maxListCount:(unsigned long long)arg2 listGridSize:(SBHIconGridSize)arg3 libraryCategoryIdentifier:(id)arg4 ;
-(SBHLibraryCategoryIdentifier *)libraryCategoryIdentifier;
-(BOOL)isLibraryCategoryFolder;
-(id)_indexPathToRevealForJiggleMode;
@end
