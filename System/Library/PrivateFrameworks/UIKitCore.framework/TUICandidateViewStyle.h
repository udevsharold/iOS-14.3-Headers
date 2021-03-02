/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor, NSString, UIImage;


@protocol TUICandidateViewStyle <NSObject>
@property (nonatomic,readonly) UIFont * candidateFont; 
@property (nonatomic,readonly) UIFont * annotationTextFont; 
@property (nonatomic,readonly) UIFont * alternativeTextFont; 
@property (nonatomic,readonly) UIFont * candidateNumberFont; 
@property (nonatomic,readonly) UIFont * sortControlFont; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * highlightedTextColor; 
@property (nonatomic,readonly) UIColor * alternativeTextColor; 
@property (nonatomic,readonly) UIColor * highlightedAlternativeTextColor; 
@property (nonatomic,readonly) UIColor * candidateNumberColor; 
@property (nonatomic,readonly) UIColor * highlightedCandidateNumberColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * cellBackgroundColor; 
@property (nonatomic,readonly) UIColor * arrowButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * gridBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * transliterationCandidateBackgroundColor; 
@property (nonatomic,readonly) UIColor * groupHeaderBackgroundColor; 
@property (nonatomic,readonly) UIColor * lineColor; 
@property (nonatomic,readonly) UIColor * sortControlColor; 
@property (nonatomic,readonly) UIColor * sortControlBackgroundColor; 
@property (nonatomic,copy,readonly) NSString * arrowButtonImageName; 
@property (nonatomic,readonly) UIImage * cellSeparatorImage; 
@property (nonatomic,readonly) UIImage * slottedCellSeparatorImage; 
@property (nonatomic,readonly) UIImage * leftEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * rightEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * arrowButtonSeparatorImage; 
@property (nonatomic,readonly) UIImage * cellBackgroundImage; 
@property (nonatomic,readonly) UIImage * highlightedCellBackgroundImage; 
@property (nonatomic,readonly) UIImage * transliterationCandidateBackgroundImage; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,readonly) double arrowButtonHeight; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) unsigned long long maskedCorners; 
@property (nonatomic,readonly) unsigned long long gridMaskedCorners; 
@property (nonatomic,readonly) double foregroundOpacity; 
@property (nonatomic,readonly) double backgroundOpacity; 
@property (nonatomic,readonly) BOOL doNotClipToBounds; 
@property (nonatomic,readonly) long long layoutOrientation; 
@property (nonatomic,readonly) unsigned long long columnsCount; 
@property (nonatomic,readonly) unsigned long long maxNumberOfProactiveCells; 
@property (nonatomic,readonly) double minimumCellPadding; 
@property (nonatomic,readonly) double minimumCellWidth; 
@property (nonatomic,readonly) double singleSlottedCellMargin; 
@property (nonatomic,readonly) UIEdgeInsets extraCellPadding; 
@property (nonatomic,readonly) UIEdgeInsets arrowButtonPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridLinePadding; 
@property (nonatomic,readonly) CGPoint gridLineOffset; 
@property (nonatomic,readonly) UIEdgeInsets sortControlPadding; 
@property (nonatomic,readonly) long long cellTextAlignment; 
@property (nonatomic,readonly) long long alternativeTextAlignment; 
@property (nonatomic,readonly) BOOL darkBackdrop; 
@property (nonatomic,readonly) BOOL scrollDisabled; 
@property (nonatomic,readonly) BOOL allowCandidateGridExpanding; 
@property (nonatomic,readonly) BOOL showsIndex; 
@property (nonatomic,readonly) BOOL showExtraLineBeforeFirstRow; 
@property (nonatomic,readonly) BOOL fillGridWithLines; 
@property (nonatomic,readonly) BOOL dontSelectLastItemByBackwardMoving; 
@property (nonatomic,readonly) BOOL showOneMoreCandidate; 
@property (nonatomic,readonly) BOOL disableSwitchingSortingMethodByTabKey; 
@property (nonatomic,readonly) BOOL skipInlineCandidate; 
@property (nonatomic,readonly) BOOL hidesPartialCandidates; 
@property (nonatomic,readonly) long long minimumNumberOfCandidates; 
@required
-(unsigned long long)maskedCorners;
-(UIImage *)leftEdgeSeparatorImage;
-(UIFont *)sortControlFont;
-(UIColor *)sortControlColor;
-(UIColor *)alternativeTextColor;
-(UIColor *)candidateNumberColor;
-(UIFont *)annotationTextFont;
-(UIFont *)candidateNumberFont;
-(UIFont *)alternativeTextFont;
-(UIColor *)highlightedAlternativeTextColor;
-(UIColor *)arrowButtonBackgroundColor;
-(UIColor *)highlightedCandidateNumberColor;
-(UIColor *)highlightedRowBackgroundColor;
-(UIColor *)transliterationCandidateBackgroundColor;
-(NSString *)arrowButtonImageName;
-(UIColor *)groupHeaderBackgroundColor;
-(UIColor *)sortControlBackgroundColor;
-(UIImage *)cellSeparatorImage;
-(UIImage *)slottedCellSeparatorImage;
-(double)arrowButtonHeight;
-(UIImage *)rightEdgeSeparatorImage;
-(UIImage *)cellBackgroundImage;
-(unsigned long long)gridMaskedCorners;
-(UIImage *)highlightedCellBackgroundImage;
-(double)backgroundOpacity;
-(UIImage *)transliterationCandidateBackgroundImage;
-(double)foregroundOpacity;
-(BOOL)doNotClipToBounds;
-(double)minimumCellWidth;
-(UIEdgeInsets)arrowButtonPadding;
-(UIColor *)lineColor;
-(long long)cellTextAlignment;
-(long long)alternativeTextAlignment;
-(BOOL)fillGridWithLines;
-(BOOL)allowCandidateGridExpanding;
-(BOOL)showExtraLineBeforeFirstRow;
-(double)cornerRadius;
-(BOOL)dontSelectLastItemByBackwardMoving;
-(BOOL)showOneMoreCandidate;
-(BOOL)disableSwitchingSortingMethodByTabKey;
-(BOOL)skipInlineCandidate;
-(BOOL)hidesPartialCandidates;
-(long long)minimumNumberOfCandidates;
-(UIColor *)textColor;
-(long long)layoutOrientation;
-(UIColor *)highlightedTextColor;
-(double)rowHeight;
-(UIColor *)cellBackgroundColor;
-(double)singleSlottedCellMargin;
-(BOOL)showsIndex;
-(unsigned long long)maxNumberOfProactiveCells;
-(UIEdgeInsets)gridPadding;
-(UIFont *)candidateFont;
-(UIImage *)arrowButtonSeparatorImage;
-(unsigned long long)columnsCount;
-(UIEdgeInsets)sortControlPadding;
-(double)minimumCellPadding;
-(BOOL)darkBackdrop;
-(UIColor *)gridBackgroundColor;
-(UIEdgeInsets)extraCellPadding;
-(UIColor *)backgroundColor;
-(CGPoint)gridLineOffset;
-(UIColor *)highlightedBackgroundColor;
-(BOOL)scrollDisabled;
-(UIEdgeInsets)gridLinePadding;

@end
