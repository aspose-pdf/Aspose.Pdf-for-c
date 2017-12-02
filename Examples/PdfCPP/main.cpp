// HelloWorld.cpp : Defines the entry point for the console application.
#undef ASPOSE_PDF_UNIT_TEST
#undef ASPOSE_PDF_SHARED_EXPORTS

#include "Aspose.Pdf.h"
#include "PdfExamples.h"
using namespace System;
using namespace System::Drawing;

int main()
{

	Console::WriteLine(L"Open main.cpp. \nIn main() method uncomment the example that you want to run.");
	Console::WriteLine(L"=====================================================");


	//// Text
	//// =====================================================

	//CreatePdf();
	//AlignParagraph();
	//AddText();
	//ExtractText();
	//ReplaceText();
	//FindText();
	//AddUnderlineText();
	//AddTextSegment();	
	//ReplaceTextOnParticularPage();
	//ExtractTextFromRangeOfPages();

	//// Annotations
	//// =====================================================
	
	//AddAnnotation();	

	//// Document
	//// =====================================================

	AddImage();
	//GetSetInfo();
	//GetSetMetadata();
	//GetSetDocWindowProperties();
	//CreateDoc();
	//SetZoomFactor();
	//EmbedFont();
	//GetZoomFactor();
	//ValidatePDFABStandard();
	//ValidatePDFAStandard();
	//OptimizeDoc();

	//// Attachments
	//// =====================================================

	//AddAttachments();
	//DeleteAttachments();
	//GetAttachmentInformation();

	//// Pages
	//// =====================================================
	//ConcatenatePdfFiles();
	//GetPageCount();
	//GetPageProperties();
	//InsertEmptyPage();
	//InsertEmptyPageAtEnd();
	//DeleteParticularPage();
	//UpdateDimensions();
	//SplitToPages();

	//// Images
	//// =====================================================

	//DeleteImageFromPage();
	//DeleteAllImages();
	//ReplacePageImage();
	//ExtractImage();
	//ExtractImageFromParticularPage();

	// Stop before exiting
	printf("\n\nProgram Finished. Press any key to exit....");
	getchar();
}
